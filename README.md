# Engine Squared Open GL

This is a [E²](https://github.com/EngineSquared/EngineSquared) plugin to use OpenGL.

You can find an example of how to use this plugin [here](https://github.com/Miou-zora/ESGL-Example)

Systems to add:

```cpp
ES::Engine::Core core;

core.RegisterResource<ESGL::Buttons>({});

core.RegisterSystem<ES::Engine::Scheduler::Startup>(ESGL::InitGLFW);
core.RegisterSystem<ES::Engine::Scheduler::Startup>(ESGL::SetupGLFWHints);
core.RegisterSystem<ES::Engine::Scheduler::Startup>(ESGL::CreateGLFWWindow);
core.RegisterSystem<ES::Engine::Scheduler::Startup>(ESGL::LinkGLFWContextToGL);
core.RegisterSystem<ES::Engine::Scheduler::Startup>(ESGL::InitGLEW);
core.RegisterSystem<ES::Engine::Scheduler::Startup>(ESGL::CheckGLEWVersion);
core.RegisterSystem<ES::Engine::Scheduler::Startup>(ESGL::GLFWEnableVSync);
core.RegisterSystem<ES::Engine::Scheduler::Startup>(ESGL::SetupGLFWHints);
core.RegisterSystem<ES::Engine::Scheduler::Startup>(ESGL::LoadMaterialCache);
core.RegisterSystem<ES::Engine::Scheduler::Startup>(ESGL::LoadShaderManager);
core.RegisterSystem<ES::Engine::Scheduler::Startup>(ESGL::CreateCamera);
core.RegisterSystem<ES::Engine::Scheduler::Startup>(ESGL::SetupShaderUniforms);

core.RunSystems();

core.RegisterSystem<ES::Engine::Scheduler::Update>(ESGL::UpdateKey);
core.RegisterSystem<ES::Engine::Scheduler::Update>(ESGL::UpdatePosCursor);
core.RegisterSystem<ES::Engine::Scheduler::Update>(ESGL::UpdateButton);
core.RegisterSystem<ES::Engine::Scheduler::Update>(ESGL::SaveLastMousePos);
core.RegisterSystem<ES::Engine::Scheduler::Update>(ESGL::UpdateMatrices);
core.RegisterSystem<ES::Engine::Scheduler::Update>(ESGL::GLClearColor);
core.RegisterSystem<ES::Engine::Scheduler::Update>(ESGL::GLClearDepth);
core.RegisterSystem<ES::Engine::Scheduler::Update>(ESGL::GLEnableDepth);
core.RegisterSystem<ES::Engine::Scheduler::Update>(ESGL::GLEnableCullFace);
core.RegisterSystem<ES::Engine::Scheduler::Update>(ESGL::SetupCamera);
core.RegisterSystem<ES::Engine::Scheduler::Update>(ESGL::SetupLights);
core.RegisterSystem<ES::Engine::Scheduler::Update>(ESGL::RenderMeshes);
core.RegisterSystem<ES::Engine::Scheduler::Update>(ESGL::SwapBuffers);
core.RegisterSystem<ES::Engine::Scheduler::Update>(ESGL::PollEvents);
core.RegisterSystem<ES::Engine::Scheduler::Update>(ESGL::MouseDragging);
```