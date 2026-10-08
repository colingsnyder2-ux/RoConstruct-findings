// from server: 57% by colin
// roc 2007-08 004b7e30  unit: Exposer  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b7e30
//
// 004b7e30  eb8b                 jmp 0x4b7dbd
// 004b7e32  0000                 add byte ptr [eax], al
// 004b7e34  0000                 add byte ptr [eax], al
// 004b7e36  005ec3               add byte ptr [esi - 0x3d], bl

void func_004b7dbd();

void func_004b7e30()
{
    func_004b7dbd();
}
