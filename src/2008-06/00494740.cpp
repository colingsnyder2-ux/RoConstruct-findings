// from server: 100% by king_originala
// roc 2008-06 00494740  unit: RBX::Network::Player  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00494740
//
// 00494740  53                   push ebx
// 00494741  56                   push esi
// 00494742  57                   push edi
// 00494743  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00494747  8bd9                 mov ebx, ecx
// 00494749  85ff                 test edi, edi
// 0049474b  7418                 je 0x494765
// 0049474d  6a01                 push 1
// 0049474f  57                   push edi
// 00494750  e85b170000           call 0x495eb0
// 00494755  83c408               add esp, 8
// 00494758  84c0                 test al, al
// 0049475a  7409                 je 0x494765
// 0049475c  6a00                 push 0
// 0049475e  8bcb                 mov ecx, ebx
// 00494760  e84bfdffff           call 0x4944b0
// 00494765  8b742414             mov esi, dword ptr [esp + 0x14]
// 00494769  85f6                 test esi, esi
// 0049476b  7416                 je 0x494783
// 0049476d  6a01                 push 1
// 0049476f  56                   push esi
// 00494770  e80b170000           call 0x495e80
// 00494775  83c408               add esp, 8
// 00494778  84c0                 test al, al
// 0049477a  7407                 je 0x494783
// 0049477c  8bcb                 mov ecx, ebx
// 0049477e  e85dddffff           call 0x4924e0
// 00494783  85ff                 test edi, edi
// 00494785  7521                 jne 0x4947a8
// 00494787  6a01                 push 1
// 00494789  56                   push esi
// 0049478a  e8f1160000           call 0x495e80
// 0049478f  83c408               add esp, 8
// 00494792  84c0                 test al, al
// 00494794  7412                 je 0x4947a8
// 00494796  e8753c0700           call 0x508410
// 0049479b  dd9bd0010000         fstp qword ptr [ebx + 0x1d0]
// 004947a1  8bcb                 mov ecx, ebx
// 004947a3  e8a8feffff           call 0x494650
// 004947a8  5f                   pop edi
// 004947a9  5e                   pop esi
// 004947aa  5b                   pop ebx
// 004947ab  c20800               ret 8

extern int __cdecl sub_495eb0(int, int);
extern int __cdecl sub_495e80(int, int);
extern double __cdecl sub_508410();

struct S {
    char padding[0x1d0];
    double timestamp;

    void sub_4944b0(int);
    void sub_4924e0();
    void sub_494650();
    void sub_494740(int, int);
};

void S::sub_494740(int a, int b)
{
    if (a && (unsigned char)sub_495eb0(a, 1))
        sub_4944b0(0);

    if (b && (unsigned char)sub_495e80(b, 1))
        sub_4924e0();

    if (!a && (unsigned char)sub_495e80(b, 1)) {
        timestamp = sub_508410();
        sub_494650();
    }
}
