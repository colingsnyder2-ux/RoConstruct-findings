// from server: 100% by king_originala
// roc 2008-06 00584310  unit: RBX::ModelInstance  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584310
//
// 00584310  8b8164ffffff         mov eax, dword ptr [ecx - 0x9c]
// 00584316  56                   push esi
// 00584317  6a00                 push 0
// 00584319  681c7f9400           push 0x947f1c
// 0058431e  8db160feffff         lea esi, [ecx - 0x1a0]
// 00584324  687c909200           push 0x92907c
// 00584329  6a00                 push 0
// 0058432b  50                   push eax
// 0058432c  e895d41100           call 0x6a17c6
// 00584331  83c414               add esp, 0x14
// 00584334  85c0                 test eax, eax
// 00584336  7413                 je 0x58434b
// 00584338  57                   push edi
// 00584339  8bbe04010000         mov edi, dword ptr [esi + 0x104]
// 0058433f  8bce                 mov ecx, esi
// 00584341  e88af3ffff           call 0x5836d0
// 00584346  3bc7                 cmp eax, edi
// 00584348  5f                   pop edi
// 00584349  7510                 jne 0x58435b
// 0058434b  803dd953970000       cmp byte ptr [0x9753d9], 0
// 00584352  7407                 je 0x58435b
// 00584354  b801000000           mov eax, 1
// 00584359  5e                   pop esi
// 0058435a  c3                   ret 
// 0058435b  33c0                 xor eax, eax
// 0058435d  5e                   pop esi
// 0058435e  c3                   ret 

extern "C" void* __cdecl runtime_cast(
    void*, long, const void*, const void*, int);

extern char instance_type;
extern char pv_instance_type;
extern unsigned char enabled;

struct Model {
    char padding[0x104];
    void* instance;
    void* getInstance();
};

struct S {
    int f();
};

int S::f()
{
    Model* model = reinterpret_cast<Model*>(
        reinterpret_cast<char*>(this) - 0x1a0);
    void* saved;

    if ((!runtime_cast(model->instance, 0,
                       &instance_type, &pv_instance_type, 0) ||
         (saved = model->instance, model->getInstance() == saved)) &&
        enabled)
        return 1;

    return 0;
}
