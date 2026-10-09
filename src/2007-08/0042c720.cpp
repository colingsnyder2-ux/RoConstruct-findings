// from server: 62% by colin
// roc 2007-08 0042c720  unit: CLuaHtmlView  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042c720
//
// 0042c720  83ec0c               sub esp, 0xc
// 0042c723  53                   push ebx
// 0042c724  56                   push esi
// 0042c725  8d7104               lea esi, [ecx + 4]
// 0042c728  57                   push edi
// 0042c729  b9e0ec4400           mov ecx, 0x44ece0
// 0042c72e  33c0                 xor eax, eax
// 0042c730  33ff                 xor edi, edi
// 0042c732  33db                 xor ebx, ebx
// 0042c734  85c9                 test ecx, ecx
// 0042c736  7418                 je 0x42c750
// 0042c738  50                   push eax
// 0042c739  68e0ec4400           push 0x44ece0
// 0042c73e  bbe0c64200           mov ebx, 0x42c6e0
// 0042c743  bff0c64200           mov edi, 0x42c6f0
// 0042c748  e8a3ffffff           call 0x42c6f0
// 0042c74d  83c408               add esp, 8
// 0042c750  8d54240c             lea edx, [esp + 0xc]
// 0042c754  3bf2                 cmp esi, edx
// 0042c756  7411                 je 0x42c769
// 0042c758  8bcf                 mov ecx, edi
// 0042c75a  8b3e                 mov edi, dword ptr [esi]
// 0042c75c  890e                 mov dword ptr [esi], ecx
// 0042c75e  8bc8                 mov ecx, eax
// 0042c760  8b4604               mov eax, dword ptr [esi + 4]
// 0042c763  894e04               mov dword ptr [esi + 4], ecx
// 0042c766  895e08               mov dword ptr [esi + 8], ebx
// 0042c769  85ff                 test edi, edi
// 0042c76b  7408                 je 0x42c775
// 0042c76d  6a01                 push 1
// 0042c76f  50                   push eax
// 0042c770  ffd7                 call edi
// 0042c772  83c408               add esp, 8
// 0042c775  5f                   pop edi
// 0042c776  5e                   pop esi
// 0042c777  5b                   pop ebx
// 0042c778  83c40c               add esp, 0xc
// 0042c77b  c3                   ret 

struct CLuaHtmlView
{
    void sub_42C720();
};

extern int G_44ECE0;
extern void __stdcall sub_42C6F0(int, int);

void CLuaHtmlView::sub_42C720()
{
    int local[3];
    int* p = (int*)((char*)this + 4);
    int a = 0;
    int d = 0;
    int b = 0;

    if (G_44ECE0 != 0)
    {
        sub_42C6F0(a, (int)&G_44ECE0);
        b = 0x42C6E0;
        d = 0x42C6F0;
    }

    if (p != local)
    {
        int old0 = p[0];
        p[0] = d;
        int old1 = p[1];
        p[1] = a;
        p[2] = b;
        d = old0;
        a = old1;
    }

    if (d != 0)
    {
        ((void (__stdcall*)(int, int))d)(a, 1);
    }
}
