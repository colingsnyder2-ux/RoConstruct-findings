// from server: 55% by colin
// roc 2007-08 0067f650  unit: CXTPControlSelector  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f650
//
// 0067f650  83ec54               sub esp, 0x54
// 0067f653  a188518b00           mov eax, dword ptr [0x8b5188]
// 0067f658  33c4                 xor eax, esp
// 0067f65a  89442450             mov dword ptr [esp + 0x50], eax
// 0067f65e  56                   push esi
// 0067f65f  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0067f663  6a3c                 push 0x3c
// 0067f665  8d44241c             lea eax, [esp + 0x1c]
// 0067f669  6a00                 push 0
// 0067f66b  50                   push eax
// 0067f66c  e81b15fbff           call 0x630b8c
// 0067f671  83c40c               add esp, 0xc
// 0067f674  6a00                 push 0
// 0067f676  8d4c2408             lea ecx, [esp + 8]
// 0067f67a  c644243800           mov byte ptr [esp + 0x38], 0
// 0067f67f  c644243301           mov byte ptr [esp + 0x33], 1
// 0067f684  e8238d0b00           call 0x7383ac
// 0067f689  8b542408             mov edx, dword ptr [esp + 8]
// 0067f68d  6a00                 push 0
// 0067f68f  56                   push esi
// 0067f690  6800f66700           push 0x67f600
// 0067f695  8d4c2424             lea ecx, [esp + 0x24]
// 0067f699  51                   push ecx
// 0067f69a  52                   push edx
// 0067f69b  ff15e0d07700         call dword ptr [0x77d0e0]
// 0067f6a1  8bf0                 mov esi, eax
// 0067f6a3  f7de                 neg esi
// 0067f6a5  1bf6                 sbb esi, esi
// 0067f6a7  8d4c2404             lea ecx, [esp + 4]
// 0067f6ab  83c601               add esi, 1
// 0067f6ae  e8f38c0b00           call 0x7383a6
// 0067f6b3  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0067f6b7  8bc6                 mov eax, esi
// 0067f6b9  5e                   pop esi
// 0067f6ba  33cc                 xor ecx, esp
// 0067f6bc  e85d13fbff           call 0x630a1e
// 0067f6c1  83c454               add esp, 0x54
// 0067f6c4  c3                   ret 

extern "C" void __cdecl _memset(void *, int, unsigned int);
extern "C" int __stdcall EnumFontFamiliesExA(void *, void *, int (__stdcall *)(void *, void *, void *, void *), void *, unsigned long);

struct CXTPControlSelector {
    int __cdecl sub_67F650(void *);
};

int CXTPControlSelector::sub_67F650(void *param) {
    char buf[0x54];
    _memset(buf + 0x18, 0, 0x3c);
    buf[0x38] = 0;
    buf[0x33] = 1;
    void *hdc = 0;
    void *ctx = 0;
    int result = EnumFontFamiliesExA(hdc, ctx, (int (__stdcall *)(void *, void *, void *, void *))0x67f600, param, 0);
    return result == 0 ? 1 : 0;
}
