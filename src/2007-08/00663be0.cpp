// from server: 93% by colin
// roc 2007-08 00663be0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00663be0
//
// 00663be0  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00663be3  56                   push esi
// 00663be4  33f6                 xor esi, esi
// 00663be6  85c0                 test eax, eax
// 00663be8  57                   push edi
// 00663be9  7e1c                 jle 0x663c07
// 00663beb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00663bef  90                   nop 
// 00663bf0  85f6                 test esi, esi
// 00663bf2  7c2a                 jl 0x663c1e
// 00663bf4  3bf0                 cmp esi, eax
// 00663bf6  7d26                 jge 0x663c1e
// 00663bf8  8b7924               mov edi, dword ptr [ecx + 0x24]
// 00663bfb  3914b7               cmp dword ptr [edi + esi*4], edx
// 00663bfe  740f                 je 0x663c0f
// 00663c00  83c601               add esi, 1
// 00663c03  3bf0                 cmp esi, eax
// 00663c05  7ce9                 jl 0x663bf0
// 00663c07  5f                   pop edi
// 00663c08  83c8ff               or eax, 0xffffffff
// 00663c0b  5e                   pop esi
// 00663c0c  c20400               ret 4
// 00663c0f  8b01                 mov eax, dword ptr [ecx]
// 00663c11  8b5064               mov edx, dword ptr [eax + 0x64]
// 00663c14  56                   push esi
// 00663c15  ffd2                 call edx
// 00663c17  5f                   pop edi
// 00663c18  8bc6                 mov eax, esi
// 00663c1a  5e                   pop esi
// 00663c1b  c20400               ret 4
// 00663c1e  e8fdc2fcff           call 0x62ff20

struct VCXTPReportRows {
    int FindRow(int value);
};

int VCXTPReportRows::FindRow(int value) {
    int count = *(int*)((char*)this + 0x28);
    int i = 0;
    if (count > 0) {
        do {
            if (i < 0 || i >= count) {
                break;
            }
            int* rows = *(int**)((char*)this + 0x24);
            if (rows[i] == value) {
                void (__thiscall *fn)(void*, int) = *(void (__thiscall **)(void*, int))(*(int*)this + 0x64);
                fn(this, i);
                return i;
            }
            i++;
        } while (i < count);
    }
    return -1;
}
