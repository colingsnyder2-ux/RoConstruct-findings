// from server: 100% by king_originala
// roc 2008-06 00619fb0  unit: RBX::WeldTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00619fb0
//
// 00619fb0  56                   push esi
// 00619fb1  8b742408             mov esi, dword ptr [esp + 8]
// 00619fb5  57                   push edi
// 00619fb6  8bf9                 mov edi, ecx
// 00619fb8  8b0e                 mov ecx, dword ptr [esi]
// 00619fba  e8b1ecf7ff           call 0x598c70
// 00619fbf  8bce                 mov ecx, esi
// 00619fc1  e8ca76fdff           call 0x5f1690
// 00619fc6  6a02                 push 2
// 00619fc8  8bce                 mov ecx, esi
// 00619fca  e81174fdff           call 0x5f13e0
// 00619fcf  8b0e                 mov ecx, dword ptr [esi]
// 00619fd1  e8baecf7ff           call 0x598c90
// 00619fd6  8b4718               mov eax, dword ptr [edi + 0x18]
// 00619fd9  6a08                 push 8
// 00619fdb  50                   push eax
// 00619fdc  e8cf67f6ff           call 0x5807b0
// 00619fe1  83c404               add esp, 4
// 00619fe4  8bc8                 mov ecx, eax
// 00619fe6  e83538faff           call 0x5bd820
// 00619feb  5f                   pop edi
// 00619fec  5e                   pop esi
// 00619fed  c20400               ret 4

struct Receiver
{
    void begin();
    void end();
};

struct State
{
    Receiver* receiver;
    void reset();
    void set(int value);
};

struct Instance;

struct ServiceProvider
{
    void set(int value);
};

extern ServiceProvider* __cdecl findProvider(Instance* instance);

struct WeldTool
{
    char padding[0x18];
    Instance* instance;
    void apply(State* state);
};

void WeldTool::apply(State* state)
{
    state->receiver->begin();
    state->reset();
    state->set(2);
    state->receiver->end();
    findProvider(instance)->set(8);
}
