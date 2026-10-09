// from server: 67% by colin
// roc 2007-08 005625f0  unit: RBX::AllCanSelectCommand  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005625f0
//
// 005625f0  56                   push esi
// 005625f1  57                   push edi
// 005625f2  8bf9                 mov edi, ecx
// 005625f4  8b770c               mov esi, dword ptr [edi + 0xc]
// 005625f7  e894bcffff           call 0x55e290
// 005625fc  8b470c               mov eax, dword ptr [edi + 0xc]
// 005625ff  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00562605  6a00                 push 0
// 00562607  51                   push ecx
// 00562608  e8735d0100           call 0x578380
// 0056260d  8b742414             mov esi, dword ptr [esp + 0x14]
// 00562611  83c408               add esp, 8
// 00562614  6aff                 push -1
// 00562616  8bce                 mov ecx, esi
// 00562618  e893e2eaff           call 0x4108b0
// 0056261d  8b16                 mov edx, dword ptr [esi]
// 0056261f  8b4204               mov eax, dword ptr [edx + 4]
// 00562622  6a01                 push 1
// 00562624  8bce                 mov ecx, esi
// 00562626  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 0056262d  ffd0                 call eax
// 0056262f  5f                   pop edi
// 00562630  5e                   pop esi
// 00562631  c20400               ret 4

struct DataModel;

struct IDataState {
    virtual void method0();
    virtual void method1(int);
};

struct RunStateVerb {
    char pad0[8];
    DataModel* m_dataModel;
    virtual void doIt(IDataState* dataState);
};

struct AllCanSelectCommand : RunStateVerb {
    virtual void doIt(IDataState* dataState);
};

extern "C" void __cdecl sub_55E290();
extern "C" void __cdecl sub_578380(int, int);
extern "C" void __cdecl sub_4108B0();

void AllCanSelectCommand::doIt(IDataState* dataState)
{
    DataModel* dm = m_dataModel;
    sub_55E290();
    int v = *(int*)((char*)m_dataModel + 0x188);
    sub_578380(v, 0);
    sub_4108B0();
    dataState->method1(1);
    *(int*)((char*)dataState + 4) = -1;
}
