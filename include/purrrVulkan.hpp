#ifndef _PURRRVULKAN_HPP_
#define _PURRRVULKAN_HPP_

#include <vulkan/vulkan.h>
#include <purrr.hpp>

namespace purrr {
  // IMPORTANT: USER NEEDS TO MANUALLY CREATE OWN INSTANCES OF VulkanRendererbackendinstance 
  class VulkanRendererBackendInstance : public RendererBackendInstance {
  private: // Variables
    VkInstance m_vkInstance;
  public:
    VulkanRendererBackendInstance();
  }
}

#endif
