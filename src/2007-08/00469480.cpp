// from server: 77% by colin
// roc 2007-08 00469480  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00469480
//
// 00469480  53                   push ebx
// 00469481  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00469485  56                   push esi
// 00469486  8bf1                 mov esi, ecx
// 00469488  8b06                 mov eax, dword ptr [esi]
// 0046948a  83f8fe               cmp eax, -2
// 0046948d  7439                 je 0x4694c8
// 0046948f  85c0                 test eax, eax
// 00469491  55                   push ebp
// 00469492  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 00469498  7502                 jne 0x46949c
// 0046949a  ffd5                 call ebp
// 0046949c  57                   push edi
// 0046949d  8b3e                 mov edi, dword ptr [esi]
// 0046949f  8bcf                 mov ecx, edi
// 004694a1  ff15e8e57700         call dword ptr [0x77e5e8]
// 004694a7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004694aa  034714               add eax, dword ptr [edi + 0x14]
// 004694ad  03cb                 add ecx, ebx
// 004694af  3bc8                 cmp ecx, eax
// 004694b1  7711                 ja 0x4694c4
// 004694b3  8bcf                 mov ecx, edi
// 004694b5  ff15e8e57700         call dword ptr [0x77e5e8]
// 004694bb  8b5604               mov edx, dword ptr [esi + 4]
// 004694be  03d3                 add edx, ebx
// 004694c0  3bd0                 cmp edx, eax
// 004694c2  7302                 jae 0x4694c6
// 004694c4  ffd5                 call ebp
// 004694c6  5f                   pop edi
// 004694c7  5d                   pop ebp
// 004694c8  015e04               add dword ptr [esi + 4], ebx
// 004694cb  8bc6                 mov eax, esi
// 004694cd  5e                   pop esi
// 004694ce  5b                   pop ebx
// 004694cf  c20400               ret 4

struct LDraw2RobloxColorMap
{
    int* data;
    int size;
    LDraw2RobloxColorMap& append(int count);
};

extern "C" int (__stdcall *g_77e6d8)();
extern "C" int (__stdcall *g_77e5e8)(int*);

LDraw2RobloxColorMap& LDraw2RobloxColorMap::append(int count)
{
    if (data != (int*)-2)
    {
        if (data == 0)
            g_77e6d8();
        int* p = data;
        int cap = g_77e5e8(p) + *(int*)((char*)p + 0x14);
        if ((unsigned)(size + count) > (unsigned)cap)
        {
            g_77e6d8();
        }
        else
        {
            int cap2 = g_77e5e8(p) + *(int*)((char*)p + 0x14);
            if ((unsigned)(size + count) < (unsigned)cap2)
            {
                g_77e6d8();
            }
        }
    }
    size += count;
    return *this;
}
