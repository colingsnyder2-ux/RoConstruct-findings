// from server: 76% by colin
// roc 2007-08 0055e880  unit: RBX::SelectAllCommand  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e880
//
// 0055e880  56                   push esi
// 0055e881  57                   push edi
// 0055e882  8bf9                 mov edi, ecx
// 0055e884  8b770c               mov esi, dword ptr [edi + 0xc]
// 0055e887  e804faffff           call 0x55e290
// 0055e88c  8b470c               mov eax, dword ptr [edi + 0xc]
// 0055e88f  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 0055e895  e856f80100           call 0x57e0f0
// 0055e89a  5f                   pop edi
// 0055e89b  5e                   pop esi
// 0055e89c  c20400               ret 4

struct DataState;
struct Selection;

struct DataModel {
    char pad[0x188];
    Selection* selection;
};

struct SelectAllCommand {
    char pad[0xc];
    DataModel* dataModel;
    void doIt(DataState* dataState);
};

extern void __cdecl func_0055e290(DataModel*);
extern void __cdecl func_0057e0f0(Selection*);

void SelectAllCommand::doIt(DataState* dataState)
{
    DataModel* dm = this->dataModel;
    func_0055e290(dm);
    func_0057e0f0(this->dataModel->selection);
}
