// from server: 46% by colin
// roc 2007-08 005c4b00  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4b00
//
// 005c4b00  f3ff83c40c508d       inc dword ptr [ebx - 0x72aff33c]
// 005c4b07  4c                   dec esp
// 005c4b08  2450                 and al, 0x50
// 005c4b0a  c784249c00000002000000 mov dword ptr [esp + 0x9c], 2
// 005c4b15  e8a6e2e4ff           call 0x412dc0
// 005c4b1a  68c0108400           push 0x8410c0
// 005c4b1f  8d442450             lea eax, [esp + 0x50]
// 005c4b23  50                   push eax
// 005c4b24  e875c00600           call 0x630b9e

struct EventArguments {
    char data[0x50];
    EventArguments(int n);
};

struct GenericSlotWrapper {
    virtual ~GenericSlotWrapper();
    virtual void execute(const EventArguments& arguments) = 0;
};

struct WaitScriptSlot;

struct TGenericSlotWrapper : GenericSlotWrapper {
    WaitScriptSlot* slot;
    TGenericSlotWrapper(const WaitScriptSlot& s);
    virtual ~TGenericSlotWrapper();
    virtual void execute(const EventArguments& arguments);
};

extern "C" void __cdecl sub_412DC0();
extern "C" void __cdecl sub_630B9E(void*, void*);

TGenericSlotWrapper::TGenericSlotWrapper(const WaitScriptSlot& s)
{
    slot = (WaitScriptSlot*)&s;
    EventArguments args(2);
    sub_412DC0();
    sub_630B9E((void*)0x8410C0, &args);
}
