// from server: 78% by colin
// roc 2007-08 0055e510  unit: RBX::RotateSelectionVerb  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e510
//
// 0055e510  56                   push esi
// 0055e511  e83ad40400           call 0x5ab950
// 0055e516  8b742408             mov esi, dword ptr [esp + 8]
// 0055e51a  50                   push eax
// 0055e51b  8bce                 mov ecx, esi
// 0055e51d  e8aeb0faff           call 0x5095d0
// 0055e522  8bc6                 mov eax, esi
// 0055e524  5e                   pop esi
// 0055e525  c20400               ret 4

struct DataModel;

extern DataModel* __cdecl getDataModel();

struct RotateAxisCommand {
    void construct(DataModel* dataModel);
};

struct RotateSelectionVerb : RotateAxisCommand {
    RotateSelectionVerb(DataModel* dataModel);
};

RotateSelectionVerb::RotateSelectionVerb(DataModel* dataModel)
{
    construct(getDataModel());
}
