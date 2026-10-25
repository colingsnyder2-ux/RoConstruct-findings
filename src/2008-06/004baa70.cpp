// from server: 100% by tester
// roc 2008-06 004baa70  unit: Exposer  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004baa70
//
// 004baa70  8b442404             mov eax, dword ptr [esp + 4]
// 004baa74  50                   push eax
// 004baa75  68ac038100           push 0x8103ac
// 004baa7a  ff15dc278000         call dword ptr [0x8027dc]
// 004baa80  83c408               add esp, 8
// 004baa83  c20400               ret 4

extern "C" int (__cdecl *printf)(const char*, ...);

extern char G_format[];

struct Exposer {
    int Show(int value);
};

int Exposer::Show(int value)
{
    return printf(G_format, value);
}
