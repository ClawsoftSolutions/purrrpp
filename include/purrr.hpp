#ifndef _PURRR_HPP_
#define _PURRR_HPP_

namespace purrr {
  class RendererBackendInstance {
  public: // Functions
  };

  struct RendererConfiguration {
  public: // Variables
    RendererBackendInstance &m_backendInstance;
  }

  class Renderer {
  private: // Variables
    RendererBackendInstance &m_backendInstance;
    
  public: // Functions
    Renderer(RendererConfiguration configuration);
    ~Renderer();
  };
}

#endif
