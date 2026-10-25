// from server: 59% by atomic.potato
// roc 2011-06 00567840  unit: G3D::Random  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00567840
//
// 00567840  53                   push ebx
// 00567841  56                   push esi
// 00567842  8b742414             mov esi, dword ptr [esp + 0x14]
// 00567846  837e0400             cmp dword ptr [esi + 4], 0
// 0056784a  8d5e04               lea ebx, [esi + 4]
// 0056784d  7406                 je 0x567855
// 0056784f  5e                   pop esi
// 00567850  83c8ff               or eax, 0xffffffff
// 00567853  5b                   pop ebx
// 00567854  c3                   ret 
// 00567855  f6461001             test byte ptr [esi + 0x10], 1
// 00567859  57                   push edi
// 0056785a  0f85ad000000         jne 0x56790d
// 00567860  837e2000             cmp dword ptr [esi + 0x20], 0
// 00567864  0f86a3000000         jbe 0x56790d
// 0056786a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0056786e  85ff                 test edi, edi
// 00567870  0f8697000000         jbe 0x56790d
// 00567876  8b4618               mov eax, dword ptr [esi + 0x18]
// 00567879  8b0e                 mov ecx, dword ptr [esi]
// 0056787b  8b5104               mov edx, dword ptr [ecx + 4]
// 0056787e  6a00                 push 0
// 00567880  50                   push eax
// 00567881  52                   push edx
// 00567882  ff151c09a400         call dword ptr [0xa4091c]
// 00567888  83c40c               add esp, 0xc
// 0056788b  85c0                 test eax, eax
// 0056788d  7d1b                 jge 0x5678aa
// 0056788f  ff153009a400         call dword ptr [0xa40930]
// 00567895  8b00                 mov eax, dword ptr [eax]
// 00567897  50                   push eax
// 00567898  6a04                 push 4
// 0056789a  53                   push ebx
// 0056789b  e840d3ffff           call 0x564be0
// 005678a0  83c40c               add esp, 0xc
// 005678a3  5f                   pop edi
// 005678a4  5e                   pop esi
// 005678a5  83c8ff               or eax, 0xffffffff
// 005678a8  5b                   pop ebx
// 005678a9  c3                   ret 
// 005678aa  8b4620               mov eax, dword ptr [esi + 0x20]
// 005678ad  3bf8                 cmp edi, eax
// 005678af  7302                 jae 0x5678b3
// 005678b1  8bc7                 mov eax, edi
// 005678b3  8b0e                 mov ecx, dword ptr [esi]
// 005678b5  8b5104               mov edx, dword ptr [ecx + 4]
// 005678b8  52                   push edx
// 005678b9  50                   push eax
// 005678ba  8b442418             mov eax, dword ptr [esp + 0x18]
// 005678be  6a01                 push 1
// 005678c0  50                   push eax
// 005678c1  ff15f808a400         call dword ptr [0xa408f8]
// 005678c7  8bf8                 mov edi, eax
// 005678c9  83c410               add esp, 0x10
// 005678cc  85ff                 test edi, edi
// 005678ce  7515                 jne 0x5678e5
// 005678d0  50                   push eax
// 005678d1  6a11                 push 0x11
// 005678d3  53                   push ebx
// 005678d4  e807d3ffff           call 0x564be0
// 005678d9  83c40c               add esp, 0xc
// 005678dc  83cfff               or edi, 0xffffffff
// 005678df  8bc7                 mov eax, edi
// 005678e1  5f                   pop edi
// 005678e2  5e                   pop esi
// 005678e3  5b                   pop ebx
// 005678e4  c3                   ret 
// 005678e5  7d1a                 jge 0x567901
// 005678e7  ff153009a400         call dword ptr [0xa40930]
// 005678ed  8b08                 mov ecx, dword ptr [eax]
// 005678ef  51                   push ecx
// 005678f0  6a05                 push 5
// 005678f2  53                   push ebx
// 005678f3  e8e8d2ffff           call 0x564be0
// 005678f8  83c40c               add esp, 0xc
// 005678fb  8bc7                 mov eax, edi
// 005678fd  5f                   pop edi
// 005678fe  5e                   pop esi
// 005678ff  5b                   pop ebx
// 00567900  c3                   ret 
// 00567901  017e18               add dword ptr [esi + 0x18], edi
// 00567904  297e20               sub dword ptr [esi + 0x20], edi
// 00567907  8bc7                 mov eax, edi
// 00567909  5f                   pop edi
// 0056790a  5e                   pop esi
// 0056790b  5b                   pop ebx
// 0056790c  c3                   ret 
// 0056790d  5f                   pop edi
// 0056790e  5e                   pop esi
// 0056790f  33c0                 xor eax, eax
// 00567911  5b                   pop ebx
// 00567912  c3                   ret 

extern "C" int __cdecl _errno();
extern "C" unsigned int __cdecl fread(void*, unsigned int, unsigned int, void*);
extern "C" int __cdecl fseek(void*, long, int);

extern "C" int __stdcall sub_564BE0(int*, int, int*);

struct S {
    void* field0;
    int field4;
    char pad8[8];
    unsigned char field10;
    char pad11[7];
    int field18;
    char pad1c[4];
    unsigned int field20;

    int __cdecl f(unsigned int n);
};

int S::f(unsigned int n) {
    if (this->field4 != 0) {
        return -1;
    }
    if ((this->field10 & 1) != 0) {
        return 0;
    }
    if (this->field20 == 0) {
        return 0;
    }
    if (n == 0) {
        return 0;
    }
    if (fseek(this->field0, this->field18, 0) < 0) {
        sub_564BE0(&this->field4, 4, (int*)_errno());
        return -1;
    }
    unsigned int avail = this->field20;
    if (n < avail) {
        avail = n;
    }
    int r = fread((void*)n, 1, avail, this->field0);
    if (r == 0) {
        sub_564BE0(&this->field4, 0x11, (int*)0);
        return -1;
    }
    if (r < 0) {
        sub_564BE0(&this->field4, 5, (int*)_errno());
        return r;
    }
    this->field18 += r;
    this->field20 -= r;
    return r;
}
