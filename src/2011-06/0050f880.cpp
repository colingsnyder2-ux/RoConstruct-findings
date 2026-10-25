// from server: 100% by tester
// roc 2011-06 0050f880  unit: Exposer  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050f880
//
// 0050f880  8b442404             mov eax, dword ptr [esp + 4]
// 0050f884  50                   push eax
// 0050f885  6844d1a700           push 0xa7d144
// 0050f88a  ff15040aa400         call dword ptr [0xa40a04]
// 0050f890  83c408               add esp, 8
// 0050f893  c20400               ret 4

extern "C" int (__cdecl *printf)(const char*, ...);

extern char G_format[];

struct Exposer {
    int Show(int value);
};

int Exposer::Show(int value)
{
    return printf(G_format, value);
}
