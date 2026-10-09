// from server: 64% by colin
// roc 2007-08 006273b0  unit: RBX::SeparateStage  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006273b0
//
// 006273b0  83ec0c               sub esp, 0xc
// 006273b3  56                   push esi
// 006273b4  8b742414             mov esi, dword ptr [esp + 0x14]
// 006273b8  57                   push edi
// 006273b9  8bf9                 mov edi, ecx
// 006273bb  57                   push edi
// 006273bc  8bce                 mov ecx, esi
// 006273be  e86d1dfeff           call 0x609130
// 006273c3  8b06                 mov eax, dword ptr [esi]
// 006273c5  8b500c               mov edx, dword ptr [eax + 0xc]
// 006273c8  8bce                 mov ecx, esi
// 006273ca  ffd2                 call edx
// 006273cc  83f801               cmp eax, 1
// 006273cf  7516                 jne 0x6273e7
// 006273d1  8d442418             lea eax, [esp + 0x18]
// 006273d5  50                   push eax
// 006273d6  8d4c240c             lea ecx, [esp + 0xc]
// 006273da  51                   push ecx
// 006273db  8d4f1c               lea ecx, [edi + 0x1c]
// 006273de  89742420             mov dword ptr [esp + 0x20], esi
// 006273e2  e8c9b5fbff           call 0x5e29b0
// 006273e7  8b4f08               mov ecx, dword ptr [edi + 8]
// 006273ea  8b11                 mov edx, dword ptr [ecx]
// 006273ec  8b4210               mov eax, dword ptr [edx + 0x10]
// 006273ef  56                   push esi
// 006273f0  ffd0                 call eax
// 006273f2  5f                   pop edi
// 006273f3  5e                   pop esi
// 006273f4  83c40c               add esp, 0xc
// 006273f7  c20400               ret 4

struct SeparateStage {
    char pad[8];
    void* field8;
    char pad2[0x1c - 0xc];
    char field1c[0x10];
    void func(void* arg);
};

extern "C" void __stdcall sub_609130(void* arg);
extern "C" void __stdcall sub_5e29b0(void* a, void* b, void* c);

void SeparateStage::func(void* arg) {
    void* local1;
    void* local2;
    void* local3;
    sub_609130(arg);
    void** vtbl = *(void***)arg;
    int (__stdcall *fn)(void*) = (int (__stdcall *)(void*))vtbl[3];
    int result = fn(arg);
    if (result == 1) {
        local3 = arg;
        sub_5e29b0(&local1, &local2, &local3);
    }
    void** vtbl2 = *(void***)field8;
    void (__stdcall *fn2)(void*, void*) = (void (__stdcall *)(void*, void*))vtbl2[4];
    fn2(field8, arg);
}
