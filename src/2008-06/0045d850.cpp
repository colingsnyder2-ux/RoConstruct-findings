// from server: 98% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Control {
    long reserved;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared& other)
        : object(other.object), control(other.control)
    {
        if (control)
            _InterlockedExchangeAdd(&control->references, 1);
    }

    ~Shared();
};

struct Renderer {
    virtual ~Renderer();
    char storage[104];
    Renderer(Shared);
};

struct TextureArgs {
    char storage[24];
    TextureArgs(unsigned int);
};

struct TextureRenderer {
    virtual ~TextureRenderer();
    void* owner;
    TextureArgs args;

    TextureRenderer(void*);
};

inline TextureRenderer::TextureRenderer(void* value)
    : owner(value), args(0xa00000)
{
}

struct S {
    char padding0[0x70];
    Shared shared;
    char padding1[0x34];
    void* owner;
    Renderer* renderer;
    TextureRenderer* textureRenderer;

    void f();
};

void S::f()
{
    Renderer* replacement = new Renderer(shared);
    if (replacement != renderer && renderer)
        delete renderer;
    renderer = replacement;

    TextureRenderer* textureReplacement = new TextureRenderer(owner);
    if (textureReplacement != textureRenderer && textureRenderer)
        delete textureRenderer;
    textureRenderer = textureReplacement;
}
