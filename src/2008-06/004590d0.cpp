// from server: 84% by atomic.potato
typedef unsigned int DWORD;
typedef int BOOL;

extern "C" void* GetSingleton();
extern "C" BOOL __stdcall PostMessageA(void*, unsigned int, unsigned int, long);

struct LockPlayModeVerb
{
	void f();
};

void LockPlayModeVerb::f()
{
	void* a = GetSingleton();
	a = *(void**)((char*)a + 4);
	a = *(void**)((char*)a + 0x20);
	void* hwnd = *(void**)((char*)a + 0x20);
	PostMessageA(hwnd, 0x111, 0x80ff, 0);
}
