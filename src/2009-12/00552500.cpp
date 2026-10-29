// roc 2009-12 00552500  unit: Exposer  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00552500
//
// 00552500  8b442404             mov eax, dword ptr [esp + 4]
// 00552504  50                   push eax
// 00552505  6830ea9b00           push 0x9bea30
// 0055250a  ff15b8b79800         call dword ptr [0x98b7b8]
// 00552510  83c408               add esp, 8
// 00552513  c20400               ret 4
// copied from an identical function in another client (function ?Show@Exposer@ns_ROCX000013@@QAEHH@Z)

namespace ns_ROCX000013 {
// from server: 100% by tester
extern "C" int (__cdecl *printf)(const char*, ...);

extern char G_format[];

struct Exposer {
    int Show(int value);
};

int Exposer::Show(int value)
{
    return printf(G_format, value);
}
}
