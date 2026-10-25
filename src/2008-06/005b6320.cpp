// from server: 100% by king_originala
// roc 2008-06 005b6320  unit: RBX::ModelSetPrimaryPartTool  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6320
//
// 005b6320  8b442404             mov eax, dword ptr [esp + 4]
// 005b6324  56                   push esi
// 005b6325  68e0be9700           push 0x97bee0
// 005b632a  6a00                 push 0
// 005b632c  50                   push eax
// 005b632d  e85efa0500           call 0x615d90
// 005b6332  8bf0                 mov esi, eax
// 005b6334  85f6                 test esi, esi
// 005b6336  742a                 je 0x5b6362
// 005b6338  6a00                 push 0
// 005b633a  68402a9300           push 0x932a40
// 005b633f  681c7f9400           push 0x947f1c
// 005b6344  6a00                 push 0
// 005b6346  8bce                 mov ecx, esi
// 005b6348  e8d32a0500           call 0x608e20
// 005b634d  50                   push eax
// 005b634e  e873b40e00           call 0x6a17c6
// 005b6353  83c414               add esp, 0x14
// 005b6356  85c0                 test eax, eax
// 005b6358  7408                 je 0x5b6362
// 005b635a  56                   push esi
// 005b635b  8bc8                 mov ecx, eax
// 005b635d  e8cef7fcff           call 0x585b30
// 005b6362  33c0                 xor eax, eax
// 005b6364  5e                   pop esi
// 005b6365  c20400               ret 4

struct S {
    int f(void* arg);
    S* lookup(void* arg, int index, const char* name);
    void* get();
    void assign(S* value);
};

extern "C" void* __cdecl cast_object(
    void* object, long offset, const void* sourceType,
    const void* targetType, int isReference);

int S::f(void* arg)
{
    S* value = lookup(arg, 0, reinterpret_cast<const char*>(0x97bee0));
    if (value) {
        S* model = static_cast<S*>(cast_object(
            value->get(), 0,
            reinterpret_cast<const void*>(0x947f1c),
            reinterpret_cast<const void*>(0x932a40), 0));
        if (model)
            model->assign(value);
    }
    return 0;
}
