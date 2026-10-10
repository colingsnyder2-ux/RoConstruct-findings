// from server: 36% by colin
struct VDHTMLWindow_SignalDesc
{
    void construct();
};

extern "C" void __stdcall sub_00413920();
extern "C" void* __stdcall sub_00419110();

void VDHTMLWindow_SignalDesc::construct()
{
    sub_00413920();
    *(int*)((char*)this + 0x00) = 0x78748c;
    *(int*)((char*)this + 0x04) = 0x787484;
    *(int*)((char*)this + 0x10) = 0x78747c;
    *(int*)((char*)this + 0x14) = 0x78746c;
    *(int*)((char*)this + 0x2c) = 0x78745c;
    *(int*)((char*)this + 0x44) = 0x78744c;
    *(int*)((char*)this + 0x5c) = 0x78743c;
    *(int*)((char*)this + 0x74) = 0x78742c;
    *(int*)((char*)this + 0x8c) = 0x78741c;
    *(void**)((char*)this + 0x0c) = sub_00419110();
}
