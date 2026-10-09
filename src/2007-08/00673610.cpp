// from server: 84% by colin
// roc 2007-08 00673610  unit: CXTPCustomizeSheet  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00673610
//
// 00673610  56                   push esi
// 00673611  8bf1                 mov esi, ecx
// 00673613  83bebc00000000       cmp dword ptr [esi + 0xbc], 0
// 0067361a  743f                 je 0x67365b
// 0067361c  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 00673622  e859e8fbff           call 0x631e80
// 00673627  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0067362d  8b91a0000000         mov edx, dword ptr [ecx + 0xa0]
// 00673633  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00673637  56                   push esi
// 00673638  6a00                 push 0
// 0067363a  f7d8                 neg eax
// 0067363c  52                   push edx
// 0067363d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00673641  1bc0                 sbb eax, eax
// 00673643  51                   push ecx
// 00673644  83e008               and eax, 8
// 00673647  52                   push edx
// 00673648  83c801               or eax, 1
// 0067364b  50                   push eax
// 0067364c  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 00673652  50                   push eax
// 00673653  e8780cfcff           call 0x6342d0
// 00673658  83c41c               add esp, 0x1c
// 0067365b  5e                   pop esi
// 0067365c  c20800               ret 8

struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* field_b8;
    void* field_bc;
    void method(int, int);
};

extern "C" int __stdcall sub_631e80(void*);
extern "C" void __stdcall sub_6342d0(void*, int, int, int, int, int, int);

void CXTPCustomizeSheet::method(int a, int b) {
    if (field_bc != 0) {
        int r = sub_631e80(field_b8);
        int v = *(int*)((char*)field_b8 + 0xa0);
        int flag = (r != 0) ? 0 : 8;
        flag |= 1;
        sub_6342d0(field_bc, flag, a, b, v, 0, (int)this);
    }
}
