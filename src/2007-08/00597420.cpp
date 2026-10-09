// from server: 100% by colin
// roc 2007-08 00597420  unit: RBX::Stats::Item  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00597420
//
// 00597420  8b442404             mov eax, dword ptr [esp + 4]
// 00597424  56                   push esi
// 00597425  50                   push eax
// 00597426  8bf1                 mov esi, ecx
// 00597428  e8a346ffff           call 0x58bad0
// 0059742d  c706ac107b00         mov dword ptr [esi], 0x7b10ac
// 00597433  c74604a0107b00       mov dword ptr [esi + 4], 0x7b10a0
// 0059743a  c7461098107b00       mov dword ptr [esi + 0x10], 0x7b1098
// 00597441  c7461488107b00       mov dword ptr [esi + 0x14], 0x7b1088
// 00597448  c7462c78107b00       mov dword ptr [esi + 0x2c], 0x7b1078
// 0059744f  c7464468107b00       mov dword ptr [esi + 0x44], 0x7b1068
// 00597456  c7465c58107b00       mov dword ptr [esi + 0x5c], 0x7b1058
// 0059745d  c7467448107b00       mov dword ptr [esi + 0x74], 0x7b1048
// 00597464  c7868c00000038107b00 mov dword ptr [esi + 0x8c], 0x7b1038
// 0059746e  8bc6                 mov eax, esi
// 00597470  5e                   pop esi
// 00597471  c20400               ret 4

struct S_00597420 {
    char pad0[4];
    int m_field4;
    char pad8[8];
    int m_field10;
    int m_field14;
    char pad18[0x18];
    int m_field2c;
    char pad30[0x18];
    int m_field44;
    char pad48[0x18];
    int m_field5c;
    char pad60[0x18];
    int m_field74;
    char pad78[0x14];
    int m_field8c;
    S_00597420* ctor(int);
};

extern "C" void __stdcall sub_0058bad0(int);

S_00597420* S_00597420::ctor(int arg)
{
    sub_0058bad0(arg);
    *(int*)((char*)this + 0) = 0x7b10ac;
    *(int*)((char*)this + 4) = 0x7b10a0;
    *(int*)((char*)this + 0x10) = 0x7b1098;
    *(int*)((char*)this + 0x14) = 0x7b1088;
    *(int*)((char*)this + 0x2c) = 0x7b1078;
    *(int*)((char*)this + 0x44) = 0x7b1068;
    *(int*)((char*)this + 0x5c) = 0x7b1058;
    *(int*)((char*)this + 0x74) = 0x7b1048;
    *(int*)((char*)this + 0x8c) = 0x7b1038;
    return this;
}
