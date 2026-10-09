// from server: 77% by colin
// roc 2007-08 004bf140  unit: RakPeer  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bf140
//
// 004bf140  56                   push esi
// 004bf141  8bf1                 mov esi, ecx
// 004bf143  685c2f8900           push 0x892f5c
// 004bf148  8d4c240c             lea ecx, [esp + 0xc]
// 004bf14c  e85f43feff           call 0x4a34b0
// 004bf151  84c0                 test al, al
// 004bf153  7423                 je 0x4bf178
// 004bf155  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004bf159  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004bf15d  6a01                 push 1
// 004bf15f  6a00                 push 0
// 004bf161  50                   push eax
// 004bf162  51                   push ecx
// 004bf163  8bce                 mov ecx, esi
// 004bf165  e816daffff           call 0x4bcb80
// 004bf16a  85c0                 test eax, eax
// 004bf16c  740a                 je 0x4bf178
// 004bf16e  8b8034080000         mov eax, dword ptr [eax + 0x834]
// 004bf174  5e                   pop esi
// 004bf175  c20800               ret 8
// 004bf178  8b8608070000         mov eax, dword ptr [esi + 0x708]
// 004bf17e  5e                   pop esi
// 004bf17f  c20800               ret 8

struct RakPeer {
    char pad[0x708];
    int field_708;
    int func_4bcb80(int, int, int, int);
    int func_4bf140(int, int);
};

extern "C" int __stdcall sub_4a34b0(int, int);
extern int g_892f5c;

int RakPeer::func_4bf140(int a1, int a2)
{
    int local;
    if (sub_4a34b0((int)&g_892f5c, (int)&local)) {
        int r = func_4bcb80(local, a1, 0, 1);
        if (r != 0) {
            return *(int*)(r + 0x834);
        }
    }
    return field_708;
}
