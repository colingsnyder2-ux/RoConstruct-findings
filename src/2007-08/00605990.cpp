// from server: 87% by colin
// roc 2007-08 00605990  unit: RBX::SleepStage  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00605990
//
// 00605990  8b442404             mov eax, dword ptr [esp + 4]
// 00605994  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00605997  89542404             mov dword ptr [esp + 4], edx
// 0060599b  e920fcffff           jmp 0x6055c0

struct SleepStage {
    char pad[0x6c];
    int field_6c;
};

void stepAssembliesWakePending(SleepStage* stage);

void stepSleepStage(SleepStage* stage)
{
    stepAssembliesWakePending((SleepStage*)stage->field_6c);
}
