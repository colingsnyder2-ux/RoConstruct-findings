// from server: 83% by colin
// roc 2007-08 00639530  unit: CPatchedControlComboBox  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00639530
//
// 00639530  56                   push esi
// 00639531  8bf1                 mov esi, ecx
// 00639533  8b06                 mov eax, dword ptr [esi]
// 00639535  8b5074               mov edx, dword ptr [eax + 0x74]
// 00639538  ffd2                 call edx
// 0063953a  85c0                 test eax, eax
// 0063953c  7506                 jne 0x639544
// 0063953e  33c0                 xor eax, eax
// 00639540  5e                   pop esi
// 00639541  c21000               ret 0x10
// 00639544  8bce                 mov ecx, esi
// 00639546  e86560dfff           call 0x42f5b0
// 0063954b  85c0                 test eax, eax
// 0063954d  75ef                 jne 0x63953e
// 0063954f  3986c4010000         cmp dword ptr [esi + 0x1c4], eax
// 00639555  75e7                 jne 0x63953e
// 00639557  e854fcffff           call 0x6391b0
// 0063955c  85c0                 test eax, eax
// 0063955e  74de                 je 0x63953e
// 00639560  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 00639566  8b01                 mov eax, dword ptr [ecx]
// 00639568  8b8010020000         mov eax, dword ptr [eax + 0x210]
// 0063956e  33d2                 xor edx, edx
// 00639570  663954240c           cmp word ptr [esp + 0xc], dx
// 00639575  6a00                 push 0
// 00639577  0f9ec2               setle dl
// 0063957a  8d541226             lea edx, [edx + edx + 0x26]
// 0063957e  52                   push edx
// 0063957f  56                   push esi
// 00639580  ffd0                 call eax
// 00639582  b801000000           mov eax, 1
// 00639587  5e                   pop esi
// 00639588  c21000               ret 0x10

struct CPatchedControlComboBox
{
    int f(int a, int b, int c, int d);
};

extern "C" int __stdcall sub_42F5B0();
extern "C" int __stdcall sub_6391B0();

int CPatchedControlComboBox::f(int a, int b, int c, int d)
{
    int v = (*(int (__thiscall **)(void))(*(int*)this + 0x74))();
    if (v == 0)
        return 0;
    if (sub_42F5B0() != 0)
        return 0;
    if (*(int*)((char*)this + 0x1c4) != 0)
        return 0;
    if (sub_6391B0() == 0)
        return 0;
    int* p = *(int**)((char*)this + 0x16c);
    int (__stdcall *fn)(void*, int, int) = *(int (__stdcall **)(void*, int, int))(*(int*)p + 0x210);
    short s = (short)c;
    int flag = (s <= 0) ? 1 : 0;
    fn(this, flag + flag + 0x26, 0);
    return 1;
}
