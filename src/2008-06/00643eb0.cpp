// from server: 81% by colin
// roc 2008-06 00643eb0  unit: RBX::HUMAN::HumanoidState  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00643eb0
//
// 00643eb0  8b4108               mov eax, dword ptr [ecx + 8]
// 00643eb3  50                   push eax
// 00643eb4  e8b737f9ff           call 0x5d7670
// 00643eb9  83c404               add esp, 4
// 00643ebc  8bc8                 mov ecx, eax
// 00643ebe  e87dfeffff           call 0x643d40
// 00643ec3  f7d8                 neg eax
// 00643ec5  1bc0                 sbb eax, eax
// 00643ec7  f7d8                 neg eax
// 00643ec9  c3                   ret 

struct HumanoidState
{
    int padding0;
    int padding4;
    int field8;
    bool computeTipped() const;
};

extern "C" int __stdcall sub_5D7670(int);
extern "C" int __stdcall sub_643D40();

bool HumanoidState::computeTipped() const
{
    int v = sub_5D7670(field8);
    int r = ((int (__thiscall*)(int))sub_643D40)(v);
    return r != 0;
}
