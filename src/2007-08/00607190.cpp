// from server: 79% by colin
// roc 2007-08 00607190  unit: RBX::ClumpStage  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00607190
//
// 00607190  53                   push ebx
// 00607191  56                   push esi
// 00607192  57                   push edi
// 00607193  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00607197  8bd9                 mov ebx, ecx
// 00607199  8bcf                 mov ecx, edi
// 0060719b  e820dcfaff           call 0x5b4dc0
// 006071a0  8bf0                 mov esi, eax
// 006071a2  85f6                 test esi, esi
// 006071a4  742e                 je 0x6071d4
// 006071a6  56                   push esi
// 006071a7  57                   push edi
// 006071a8  e8d3420000           call 0x60b480
// 006071ad  83c408               add esp, 8
// 006071b0  84c0                 test al, al
// 006071b2  7412                 je 0x6071c6
// 006071b4  8b4608               mov eax, dword ptr [esi + 8]
// 006071b7  3bf8                 cmp edi, eax
// 006071b9  7503                 jne 0x6071be
// 006071bb  8b460c               mov eax, dword ptr [esi + 0xc]
// 006071be  50                   push eax
// 006071bf  8bcb                 mov ecx, ebx
// 006071c1  e8caffffff           call 0x607190
// 006071c6  56                   push esi
// 006071c7  8bcf                 mov ecx, edi
// 006071c9  e812dcfaff           call 0x5b4de0
// 006071ce  8bf0                 mov esi, eax
// 006071d0  85f6                 test esi, esi
// 006071d2  75d2                 jne 0x6071a6
// 006071d4  57                   push edi
// 006071d5  8bcb                 mov ecx, ebx
// 006071d7  e884feffff           call 0x607060
// 006071dc  5f                   pop edi
// 006071dd  5e                   pop esi
// 006071de  5b                   pop ebx
// 006071df  c20400               ret 4

struct ClumpStage {
    void func_00607190(void*);
    void func_00607060(void*);
};

extern "C" void* __cdecl sub_005B4DC0(void*);
extern "C" void* __cdecl sub_005B4DE0(void*, void*);
extern "C" char __cdecl sub_0060B480(void*, void*);

void ClumpStage::func_00607190(void* arg)
{
    void* esi = sub_005B4DC0(arg);
    while (esi != 0) {
        if (sub_0060B480(arg, esi)) {
            void* eax = *(void**)((char*)esi + 8);
            if (arg == eax) {
                eax = *(void**)((char*)esi + 0xc);
            }
            func_00607190(eax);
        }
        esi = sub_005B4DE0(arg, esi);
    }
    func_00607060(arg);
}
