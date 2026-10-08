// from server: 96% by colin
// roc 2007-08 00633190  unit: MyXTPCommandBars  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00633190
//
// 00633190  e84bf4ffff           call 0x6325e0
// 00633195  85c0                 test eax, eax
// 00633197  7411                 je 0x6331aa
// 00633199  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063319d  6881000000           push 0x81
// 006331a2  51                   push ecx
// 006331a3  8bc8                 mov ecx, eax
// 006331a5  e8360f0700           call 0x6a40e0
// 006331aa  c20400               ret 4

struct MyXTPCommandBars
{
    void sub_006A40E0(unsigned int, int);
};

extern "C" MyXTPCommandBars* __cdecl sub_006325E0();

void __stdcall sub_00633190(int a1)
{
    MyXTPCommandBars* p = sub_006325E0();
    if (p)
        p->sub_006A40E0(0x81, a1);
}
