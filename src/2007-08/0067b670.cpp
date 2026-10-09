// from server: 80% by colin
// roc 2007-08 0067b670  unit: CXTPControls  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067b670
//
// 0067b670  53                   push ebx
// 0067b671  55                   push ebp
// 0067b672  56                   push esi
// 0067b673  57                   push edi
// 0067b674  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0067b678  f7df                 neg edi
// 0067b67a  1bff                 sbb edi, edi
// 0067b67c  8bd9                 mov ebx, ecx
// 0067b67e  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 0067b681  83e7fe               and edi, 0xfffffffe
// 0067b684  83c702               add edi, 2
// 0067b687  33ed                 xor ebp, ebp
// 0067b689  33f6                 xor esi, esi
// 0067b68b  85c0                 test eax, eax
// 0067b68d  7e34                 jle 0x67b6c3
// 0067b68f  90                   nop 
// 0067b690  85f6                 test esi, esi
// 0067b692  7c11                 jl 0x67b6a5
// 0067b694  3bf0                 cmp esi, eax
// 0067b696  7d0d                 jge 0x67b6a5
// 0067b698  3b732c               cmp esi, dword ptr [ebx + 0x2c]
// 0067b69b  7d2f                 jge 0x67b6cc
// 0067b69d  8b4328               mov eax, dword ptr [ebx + 0x28]
// 0067b6a0  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0067b6a3  eb02                 jmp 0x67b6a7
// 0067b6a5  33c9                 xor ecx, ecx
// 0067b6a7  8b11                 mov edx, dword ptr [ecx]
// 0067b6a9  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0067b6af  57                   push edi
// 0067b6b0  ffd0                 call eax
// 0067b6b2  85c0                 test eax, eax
// 0067b6b4  7403                 je 0x67b6b9
// 0067b6b6  83c501               add ebp, 1
// 0067b6b9  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 0067b6bc  83c601               add esi, 1
// 0067b6bf  3bf0                 cmp esi, eax
// 0067b6c1  7ccd                 jl 0x67b690
// 0067b6c3  5f                   pop edi
// 0067b6c4  5e                   pop esi
// 0067b6c5  8bc5                 mov eax, ebp
// 0067b6c7  5d                   pop ebp
// 0067b6c8  5b                   pop ebx
// 0067b6c9  c20400               ret 4
// 0067b6cc  e84f48fbff           call 0x62ff20

struct CXTPControls {
    int GetCount(int nIndex);
};

extern "C" void __stdcall sub_62FF20();

int CXTPControls::GetCount(int nIndex) {
    int count = 0;
    int i = 0;
    int flag = (nIndex == 0) ? 2 : 0;
    int total = *(int*)((char*)this + 0x2c);
    while (i < total) {
        int* item;
        if (i >= 0 && i < total) {
            if (i >= *(int*)((char*)this + 0x2c)) {
                sub_62FF20();
            }
            item = *(int**)(*(int*)((char*)this + 0x28) + i * 4);
        } else {
            item = 0;
        }
        if (((int (__stdcall*)(int))*(void**)(*(int*)item + 0x80))(flag) != 0) {
            count++;
        }
        total = *(int*)((char*)this + 0x2c);
        i++;
    }
    return count;
}
