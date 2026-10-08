// from server: 94% by colin
// roc 2007-08 004beff0  unit: RakPeer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004beff0
//
// 004beff0  8b442408             mov eax, dword ptr [esp + 8]
// 004beff4  8b542404             mov edx, dword ptr [esp + 4]
// 004beff8  6a00                 push 0
// 004beffa  6a00                 push 0
// 004beffc  50                   push eax
// 004beffd  52                   push edx
// 004beffe  e87ddbffff           call 0x4bcb80
// 004bf003  85c0                 test eax, eax
// 004bf005  7506                 jne 0x4bf00d
// 004bf007  83c8ff               or eax, 0xffffffff
// 004bf00a  c20800               ret 8
// 004bf00d  0fb78000080000       movzx eax, word ptr [eax + 0x800]
// 004bf014  c20800               ret 8

struct RakPeer {
    int GetIndexFromSystemAddress(int, int);
};

extern "C" int __stdcall sub_4bcb80(int, int, int, int);

int RakPeer::GetIndexFromSystemAddress(int a, int b)
{
    int r = sub_4bcb80(a, b, 0, 0);
    if (r == 0)
        return -1;
    return *(unsigned short*)(r + 0x800);
}
