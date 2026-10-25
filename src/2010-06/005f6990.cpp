// from server: 100% by atomic.potato
// roc 2010-06 005f6990  unit: RBX::VHopperBin::?$FactoryProduct  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f6990
//
// 005f6990  c70164f9a200         mov dword ptr [ecx], 0xa2f964
// 005f6996  c741045cf9a200       mov dword ptr [ecx + 4], 0xa2f95c
// 005f699d  c7411850f9a200       mov dword ptr [ecx + 0x18], 0xa2f950
// 005f69a4  c7411c44f9a200       mov dword ptr [ecx + 0x1c], 0xa2f944
// 005f69ab  c781940000003cf9a200 mov dword ptr [ecx + 0x94], 0xa2f93c
// 005f69b5  e926fcffff           jmp 0x5f65e0

struct LocalBackpackTool {
    void construct();
};

extern "C" void __stdcall sub_40F8E0();

void LocalBackpackTool::construct()
{
    *(int*)((char*)this + 0x00) = 0xa2f964;
    *(int*)((char*)this + 0x04) = 0xa2f95c;
    *(int*)((char*)this + 0x18) = 0xa2f950;
    *(int*)((char*)this + 0x1c) = 0xa2f944;
    *(int*)((char*)this + 0x94) = 0xa2f93c;
    sub_40F8E0();
}
