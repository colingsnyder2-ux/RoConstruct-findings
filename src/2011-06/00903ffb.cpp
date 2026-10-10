// from server: 57% by atomic.potato
extern "C" void __cdecl target_009092d5(int);
extern "C" void __cdecl target_00c9b684();

void __declspec(naked) function_00903ffb()
{
    target_009092d5(1);
    target_00c9b684();
}
