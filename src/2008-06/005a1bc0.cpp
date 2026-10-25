// from server: 100% by colin
// roc 2008-06 005a1bc0  unit: RBX::Workspace  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1bc0
//
// 005a1bc0  56                   push esi
// 005a1bc1  57                   push edi
// 005a1bc2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a1bc6  8b07                 mov eax, dword ptr [edi]
// 005a1bc8  6a00                 push 0
// 005a1bca  68709f9300           push 0x939f70
// 005a1bcf  687c909200           push 0x92907c
// 005a1bd4  6a00                 push 0
// 005a1bd6  50                   push eax
// 005a1bd7  8bf1                 mov esi, ecx
// 005a1bd9  e8e8fb0f00           call 0x6a17c6
// 005a1bde  83c414               add esp, 0x14
// 005a1be1  85c0                 test eax, eax
// 005a1be3  740c                 je 0x5a1bf1
// 005a1be5  50                   push eax
// 005a1be6  8d8e88030000         lea ecx, [esi + 0x388]
// 005a1bec  e8dfb80300           call 0x5dd4d0
// 005a1bf1  57                   push edi
// 005a1bf2  8bce                 mov ecx, esi
// 005a1bf4  e887e5feff           call 0x590180
// 005a1bf9  c644240c00           mov byte ptr [esp + 0xc], 0
// 005a1bfe  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a1c02  50                   push eax
// 005a1c03  8d8e44030000         lea ecx, [esi + 0x344]
// 005a1c09  e8324dfdff           call 0x576940
// 005a1c0e  5f                   pop edi
// 005a1c0f  5e                   pop esi
// 005a1c10  c20400               ret 4

// from server: 97% by king_originala
extern char instanceDescriptor;
extern char renderableDescriptor;

extern "C" void *__cdecl __RTDynamicCast(
    void *, long, void *, void *, int);

struct Instance;

struct IRenderable;

struct RenderableSet {
    void remove(IRenderable *);
};

struct NotificationArgument {
    bool value;
};

struct Notification {
    void notify(NotificationArgument);
    char storage[0x44];
};

struct S {
    char padding[0x344];
    Notification notification;
    RenderableSet renderables;

    void baseRemove(Instance **);
    void remove(Instance **);
};

void S::remove(Instance **object)
{
    void *raw = *object;
    IRenderable *renderable = static_cast<IRenderable *>(
        __RTDynamicCast(raw, 0, &instanceDescriptor,
                        &renderableDescriptor, 0));
    if (renderable)
        renderables.remove(renderable);

    baseRemove(object);

    NotificationArgument argument;
    argument.value = false;
    notification.notify(argument);
}
