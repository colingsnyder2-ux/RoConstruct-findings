// from server: 100% by colin
// roc 2007-08 0048f2a0  unit: RBX::Network::VPlayer::?$BoundFuncDesc  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048f2a0
//
// 0048f2a0  8a442404             mov al, byte ptr [esp + 4]
// 0048f2a4  3a8124010000         cmp al, byte ptr [ecx + 0x124]
// 0048f2aa  7413                 je 0x48f2bf
// 0048f2ac  888124010000         mov byte ptr [ecx + 0x124], al
// 0048f2b2  c74424043cdf8b00     mov dword ptr [esp + 4], 0x8bdf3c
// 0048f2ba  e95154fbff           jmp 0x444710
// 0048f2bf  c20400               ret 4

struct S_func_0048f2a0
{
    char pad[0x124];
    char field_0x124;
    void setValue(char value);
};

extern "C" void __stdcall sub_00444710(void*);

void S_func_0048f2a0::setValue(char value)
{
    if (value != field_0x124)
    {
        field_0x124 = value;
        sub_00444710((void*)0x8bdf3c);
    }
}
