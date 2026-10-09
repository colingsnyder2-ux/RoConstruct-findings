// from server: 100% by colin
// roc 2007-08 00534900  unit: RBX::ScriptContext  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534900
//
// 00534900  8b442404             mov eax, dword ptr [esp + 4]
// 00534904  56                   push esi
// 00534905  50                   push eax
// 00534906  8bf1                 mov esi, ecx
// 00534908  e8a3dd0000           call 0x5426b0
// 0053490d  c7068c327900         mov dword ptr [esi], 0x79328c
// 00534913  c7460484327900       mov dword ptr [esi + 4], 0x793284
// 0053491a  c746107c327900       mov dword ptr [esi + 0x10], 0x79327c
// 00534921  c746146c327900       mov dword ptr [esi + 0x14], 0x79326c
// 00534928  c7462c5c327900       mov dword ptr [esi + 0x2c], 0x79325c
// 0053492f  c746444c327900       mov dword ptr [esi + 0x44], 0x79324c
// 00534936  c7465c3c327900       mov dword ptr [esi + 0x5c], 0x79323c
// 0053493d  c746742c327900       mov dword ptr [esi + 0x74], 0x79322c
// 00534944  c7868c0000001c327900 mov dword ptr [esi + 0x8c], 0x79321c
// 0053494e  8bc6                 mov eax, esi
// 00534950  5e                   pop esi
// 00534951  c20400               ret 4

struct ScriptContext {
    void construct(int);
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
    field0 = 0x79328c;
    field4 = 0x793284;
    field10 = 0x79327c;
    field14 = 0x79326c;
    field2C = 0x79325c;
    field44 = 0x79324c;
    field5C = 0x79323c;
    field74 = 0x79322c;
    field8C = 0x79321c;
    return this;
}
