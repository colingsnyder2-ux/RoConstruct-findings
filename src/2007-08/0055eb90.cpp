// from server: 100% by colin
// roc 2007-08 0055eb90  unit: RBX::EngineStatsCommand  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055eb90
//
// 0055eb90  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0055eb93  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 0055eb99  8b917c020000         mov edx, dword ptr [ecx + 0x27c]
// 0055eb9f  8b4230               mov eax, dword ptr [edx + 0x30]
// 0055eba2  8b08                 mov ecx, dword ptr [eax]
// 0055eba4  e897130800           call 0x5dff40
// 0055eba9  c20400               ret 4

struct DataModel;

struct EngineStatsCommand {
    char pad[0xc];
    DataModel* dataModel;
    void doIt(void* dataState);
};

struct Sub1 {
    char pad[0x188];
    void* field188;
};

struct Sub2 {
    char pad[0x27c];
    void* field27c;
};

struct Sub3 {
    char pad[0x30];
    void* field30;
};

extern "C" void __fastcall sub_5dff40(void* p);

void EngineStatsCommand::doIt(void* dataState)
{
    Sub1* a = *(Sub1**)((char*)dataModel + 0x188);
    Sub2* b = *(Sub2**)((char*)a + 0x27c);
    Sub3* c = *(Sub3**)((char*)b + 0x30);
    void* d = *(void**)c;
    sub_5dff40(d);
}
