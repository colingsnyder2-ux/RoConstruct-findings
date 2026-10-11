// from server: 68% by colin
// roc 2008-06 005f95c0  unit: UString_sink::?$stream_buffer  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f95c0
//
// 005f95c0  51                   push ecx
// 005f95c1  8b0424               mov eax, dword ptr [esp]
// 005f95c4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005f95c8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005f95cc  50                   push eax
// 005f95cd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f95d1  51                   push ecx
// 005f95d2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f95d6  52                   push edx
// 005f95d7  8b542418             mov edx, dword ptr [esp + 0x18]
// 005f95db  50                   push eax
// 005f95dc  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f95e0  51                   push ecx
// 005f95e1  52                   push edx
// 005f95e2  50                   push eax
// 005f95e3  e8b8ffffff           call 0x5f95a0

struct UString_sink
{
    char pad[4];
    int __cdecl write(int a, int b, int c, int d, int e, int f, int g);
};

int UString_sink::write(int a, int b, int c, int d, int e, int f, int g)
{
    return ((int (__stdcall*)(int, int, int, int, int, int, int, int))0x5f95a0)((int)this, a, b, c, d, e, f, g);
}
