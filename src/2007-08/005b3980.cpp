// from server: 75% by colin
// roc 2007-08 005b3980  unit: RBX::Assembly  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3980
//
// 005b3980  53                   push ebx
// 005b3981  55                   push ebp
// 005b3982  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 005b3988  56                   push esi
// 005b3989  8bf1                 mov esi, ecx
// 005b398b  57                   push edi
// 005b398c  8b7e38               mov edi, dword ptr [esi + 0x38]
// 005b398f  397e34               cmp dword ptr [esi + 0x34], edi
// 005b3992  7602                 jbe 0x5b3996
// 005b3994  ffd5                 call ebp
// 005b3996  8b5e34               mov ebx, dword ptr [esi + 0x34]
// 005b3999  3b5e38               cmp ebx, dword ptr [esi + 0x38]
// 005b399c  7602                 jbe 0x5b39a0
// 005b399e  ffd5                 call ebp
// 005b39a0  3bdf                 cmp ebx, edi
// 005b39a2  8bc3                 mov eax, ebx
// 005b39a4  7415                 je 0x5b39bb
// 005b39a6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005b39aa  8d9b00000000         lea ebx, [ebx]
// 005b39b0  3908                 cmp dword ptr [eax], ecx
// 005b39b2  7407                 je 0x5b39bb
// 005b39b4  83c004               add eax, 4
// 005b39b7  3bc7                 cmp eax, edi
// 005b39b9  75f5                 jne 0x5b39b0
// 005b39bb  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 005b39be  8d5004               lea edx, [eax + 4]
// 005b39c1  2bca                 sub ecx, edx
// 005b39c3  c1f902               sar ecx, 2
// 005b39c6  85c9                 test ecx, ecx
// 005b39c8  7e11                 jle 0x5b39db
// 005b39ca  03c9                 add ecx, ecx
// 005b39cc  03c9                 add ecx, ecx
// 005b39ce  51                   push ecx
// 005b39cf  52                   push edx
// 005b39d0  51                   push ecx
// 005b39d1  50                   push eax
// 005b39d2  ff1548e77700         call dword ptr [0x77e748]
// 005b39d8  83c410               add esp, 0x10
// 005b39db  834638fc             add dword ptr [esi + 0x38], -4
// 005b39df  5f                   pop edi
// 005b39e0  5e                   pop esi
// 005b39e1  5d                   pop ebp
// 005b39e2  5b                   pop ebx
// 005b39e3  c20400               ret 4

extern "C" {
    void __stdcall _invalid_parameter_noinfo();
    void* __cdecl memmove_s(void* dest, unsigned int destSize, const void* src, unsigned int count);
}

struct Assembly {
    char pad[0x34];
    int* begin;
    int* end;
    void remove(int value);
};

void Assembly::remove(int value) {
    int* first = this->begin;
    int* last = this->end;
    if (first > last) {
        _invalid_parameter_noinfo();
    }
    int* it = this->begin;
    if (it > this->end) {
        _invalid_parameter_noinfo();
    }
    int* found = it;
    if (it != last) {
        do {
            if (*found == value) {
                break;
            }
            ++found;
        } while (found != last);
    }
    int* next = found + 1;
    int count = (int)((this->end - next) >> 2);
    if (count > 0) {
        memmove_s(found, count * 4, next, count * 4);
    }
    this->end -= 1;
}
