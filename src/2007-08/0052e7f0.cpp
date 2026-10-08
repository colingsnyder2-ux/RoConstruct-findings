// from server: 59% by colin
// roc 2007-08 0052e7f0  unit: std::X::ZV?$allocator::$$A6AXMM::V?$function::?$holder  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052e7f0
//
// 0052e7f0  8b442408             mov eax, dword ptr [esp + 8]
// 0052e7f4  83f802               cmp eax, 2
// 0052e7f7  7519                 jne 0x52e812
// 0052e7f9  56                   push esi
// 0052e7fa  8b742408             mov esi, dword ptr [esp + 8]
// 0052e7fe  56                   push esi
// 0052e7ff  b9308c8900           mov ecx, 0x898c30
// 0052e804  ff1508e77700         call dword ptr [0x77e708]
// 0052e80a  f6d8                 neg al
// 0052e80c  1bc0                 sbb eax, eax
// 0052e80e  23c6                 and eax, esi
// 0052e810  5e                   pop esi
// 0052e811  c3                   ret 
// 0052e812  8b542404             mov edx, dword ptr [esp + 4]
// 0052e816  c644240800           mov byte ptr [esp + 8], 0
// 0052e81b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052e81f  51                   push ecx
// 0052e820  50                   push eax
// 0052e821  52                   push edx
// 0052e822  e8c9380c00           call 0x5f20f0
// 0052e827  83c40c               add esp, 0xc
// 0052e82a  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern type_info type_info_898c30;

extern "C" int __stdcall func_005f20f0(int, int, int);

int __cdecl func_0052e7f0(int a, int b, int c)
{
    if (c == 2) {
        int v = a;
        if (type_info_898c30 == *(type_info*)&type_info_898c30) {
            return v;
        }
        return 0;
    }
    return func_005f20f0(a, b, 0);
}
