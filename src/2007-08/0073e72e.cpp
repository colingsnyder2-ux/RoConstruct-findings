// from server: 65% by colin
// roc 2007-08 0073e72e  unit: seg_00730000  size: 26 bytes

extern "C" void __cdecl func_00630a1e(int);
extern "C" void __cdecl func_00630a18();

void __cdecl func_0073e72e(int* arg)
{
    int* p = arg;
    int v = *(int*)((char*)arg - 4);
    v ^= (int)p;
    func_00630a1e(v);
    func_00630a18();
}
