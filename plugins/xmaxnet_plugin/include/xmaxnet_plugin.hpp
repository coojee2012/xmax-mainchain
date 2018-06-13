/**
*  @file
*  @copyright defined in xmax-mainchain/LICENSE
*/
#pragma once
#include <pluginface.hpp>
#include <memory>


namespace Xmax
{

	/**
	 * This plugin is responsible for the peer to peer communications. Besides it
	 *  also handle the blockchain's data compress and decompress using ProtoBuf.
	 */
	class xmaxnet_plugin : public Xmaxapp::plugin_face
	{
		GENERATED_PLUGIN(xmaxnet_plugin, Xmaxapp::plugin_face, nullptr)
	public:
		xmaxnet_plugin();
		virtual ~xmaxnet_plugin();

		virtual void initialize(const Xmaxapp::vars_map& options) override;
		virtual void startup() override;
		virtual void shutdown() override;

	private:
		std::unique_ptr<class xmaxnet_plugin_impl> m_pImpl;
	};
}
