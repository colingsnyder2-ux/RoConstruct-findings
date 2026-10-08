// from server: 64% by colin
// roc 2007-08 00564860  unit: CXTPDockingPaneAutoHidePanel  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00564860
//
// 00564860  56                   push esi
// 00564861  8bf1                 mov esi, ecx
// 00564863  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00564867  57                   push edi
// 00564868  8b3e                 mov edi, dword ptr [esi]
// 0056486a  51                   push ecx
// 0056486b  e860b0fdff           call 0x53f8d0
// 00564870  50                   push eax
// 00564871  8b07                 mov eax, dword ptr [edi]
// 00564873  8bce                 mov ecx, esi
// 00564875  ffd0                 call eax
// 00564877  5f                   pop edi
// 00564878  5e                   pop esi
// 00564879  c20400               ret 4

struct Inner {
    virtual int f(int);
};

struct S {
    Inner* m_p;
    int g(int);
};

extern "C" int __cdecl helper(int);

int S::g(int a)
{
    Inner* p = m_p;
    return p->f(helper(a));
}
