// from server: 100% by colin
// roc 2007-08 0053d210  unit: RBX::ScriptContext  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053d210
//
// 0053d210  8b442404             mov eax, dword ptr [esp + 4]
// 0053d214  56                   push esi
// 0053d215  50                   push eax
// 0053d216  8bf1                 mov esi, ecx
// 0053d218  e893540000           call 0x5426b0
// 0053d21d  c706f45d7a00         mov dword ptr [esi], 0x7a5df4
// 0053d223  c74604ec5d7a00       mov dword ptr [esi + 4], 0x7a5dec
// 0053d22a  c74610e45d7a00       mov dword ptr [esi + 0x10], 0x7a5de4
// 0053d231  c74614d45d7a00       mov dword ptr [esi + 0x14], 0x7a5dd4
// 0053d238  c7462cc45d7a00       mov dword ptr [esi + 0x2c], 0x7a5dc4
// 0053d23f  c74644b45d7a00       mov dword ptr [esi + 0x44], 0x7a5db4
// 0053d246  c7465ca45d7a00       mov dword ptr [esi + 0x5c], 0x7a5da4
// 0053d24d  c74674945d7a00       mov dword ptr [esi + 0x74], 0x7a5d94
// 0053d254  c7868c000000845d7a00 mov dword ptr [esi + 0x8c], 0x7a5d84
// 0053d25e  8bc6                 mov eax, esi
// 0053d260  5e                   pop esi
// 0053d261  c20400               ret 4

struct ScriptContext {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    int field24;
    int field28;
    int field2C;
    int field30;
    int field34;
    int field38;
    int field3C;
    int field40;
    int field44;
    int field48;
    int field4C;
    int field50;
    int field54;
    int field58;
    int field5C;
    int field60;
    int field64;
    int field68;
    int field6C;
    int field70;
    int field74;
    int field78;
    int field7C;
    int field80;
    int field84;
    int field88;
    int field8C;
    ScriptContext* init(int);
};

extern "C" void __stdcall sub_5426B0(int);

ScriptContext* ScriptContext::init(int a) {
    sub_5426B0(a);
    field0 = 0x7a5df4;
    field4 = 0x7a5dec;
    field10 = 0x7a5de4;
    field14 = 0x7a5dd4;
    field2C = 0x7a5dc4;
    field44 = 0x7a5db4;
    field5C = 0x7a5da4;
    field74 = 0x7a5d94;
    field8C = 0x7a5d84;
    return this;
}
