// from server: 16% by tester
struct VReplicatorSignalDesc {
    void construct(int a, int b, int c);
};

extern "C" void __stdcall sub_4B0240();
extern "C" void __stdcall sub_570410();
extern "C" void __stdcall sub_52C940();
extern "C" void __stdcall sub_56DA00();
extern "C" void __stdcall sub_56D3C0();
extern "C" void __stdcall sub_415240();
extern "C" void __stdcall sub_414670();
extern "C" void __stdcall sub_56D840();

void VReplicatorSignalDesc::construct(int a, int b, int c)
{
    sub_4B0240();
    sub_570410();
    *(int*)this = 0x79dabc;
    sub_52C940();
    sub_56DA00();
    sub_56D3C0();
    sub_415240();
    sub_414670();
    sub_52C940();
    sub_56D840();
    sub_56D3C0();
    sub_415240();
    sub_414670();
}
