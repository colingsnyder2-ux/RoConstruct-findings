// roc 2007-03 005acbe0  unit: seg_005a0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005acbe0
//
// 005acbe0  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 005acbe3  8b01                 mov eax, dword ptr [ecx]
// 005acbe5  8b5018               mov edx, dword ptr [eax + 0x18]
// 005acbe8  6a02                 push 2
// 005acbea  ffd2                 call edx
// 005acbec  c3                   ret 
// copied from an identical function in another client (function ?fireSignal@VHumanoid@ns_ROCX000005@@QAEXXZ)

namespace ns_ROCX000005 {
struct SignalTarget
{
	virtual void slot0();
	virtual void slot1();
	virtual void slot2();
	virtual void slot3();
	virtual void slot4();
	virtual void slot5();
	virtual void slot6(int value);
};

struct VHumanoid
{
	char pad0[0x34];
	SignalTarget* signal;

	void fireSignal();
};

void VHumanoid::fireSignal()
{
	signal->slot6(2);
}
}
