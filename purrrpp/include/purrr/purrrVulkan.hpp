#ifndef   _PURRR_VULKAN_HPP_
#define   _PURRR_VULKAN_HPP_

#include <vulkan/vulkan.h>
#include <purrr.hpp>

namespace purrr {
  // IMPORTANT: USER NEEDS TO MANUALLY CREATE OWN INSTANCES OF VulkanRendererbackendinstance
  // Why not rename to RendererBackend? I think that "instance" part is expendable
  class VulkanRendererBackendInstance : public RendererBackendInstance {
  public:
    VulkanRendererBackendInstance();
  private: // Variables
    VkInstance m_vkInstance;
  }
}

#endif // _PURRR_VULKAN_HPP_