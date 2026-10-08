// from server: 66% by colin
// roc 2007-08 00436490  unit: CDeclarationView  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00436490
//
// 00436490  53                   push ebx
// 00436491  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00436495  55                   push ebp
// 00436496  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0043649a  56                   push esi
// 0043649b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0043649f  57                   push edi
// 004364a0  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 004364a4  3b742424             cmp esi, dword ptr [esp + 0x24]
// 004364a8  740f                 je 0x4364b9
// 004364aa  8d4608               lea eax, [esi + 8]
// 004364ad  50                   push eax
// 004364ae  57                   push edi
// 004364af  53                   push ebx
// 004364b0  ffd5                 call ebp
// 004364b2  8b36                 mov esi, dword ptr [esi]
// 004364b4  83c40c               add esp, 0xc
// 004364b7  ebeb                 jmp 0x4364a4
// 004364b9  8b442414             mov eax, dword ptr [esp + 0x14]
// 004364bd  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004364c1  8928                 mov dword ptr [eax], ebp
// 004364c3  895804               mov dword ptr [eax + 4], ebx
// 004364c6  897808               mov dword ptr [eax + 8], edi
// 004364c9  5f                   pop edi
// 004364ca  5e                   pop esi
// 004364cb  5d                   pop ebp
// 004364cc  89480c               mov dword ptr [eax + 0xc], ecx
// 004364cf  5b                   pop ebx
// 004364d0  c3                   ret 

struct CDeclarationView
{
    void updateDeclarationView(int a, int b, int c, int d, int e, int f);
};

void CDeclarationView::updateDeclarationView(int a, int b, int c, int d, int e, int f)
{
    int* p = (int*)a;
    int* q = (int*)b;
    int* r = (int*)c;
    int* s = (int*)d;
    int* t = (int*)e;
    int* u = (int*)f;

    while (p != q)
    {
        ((void (__cdecl*)(int*, int*, int*))t)(u, r, p + 2);
        p = (int*)*p;
    }

    int* out = (int*)s;
    out[0] = (int)t;
    out[1] = (int)u;
    out[2] = (int)r;
    out[3] = (int)f;
}
