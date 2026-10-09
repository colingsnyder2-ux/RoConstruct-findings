// from server: 82% by colin
// roc 2007-08 0057abc0  unit: RBX::Workspace  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057abc0
//
// 0057abc0  dd05f82a7900         fld qword ptr [0x792af8]
// 0057abc6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057abca  83ec20               sub esp, 0x20
// 0057abcd  83ec08               sub esp, 8
// 0057abd0  8d442408             lea eax, [esp + 8]
// 0057abd4  dd1c24               fstp qword ptr [esp]
// 0057abd7  50                   push eax
// 0057abd8  e8c3700100           call 0x591ca0
// 0057abdd  8bc8                 mov ecx, eax
// 0057abdf  e89c6f0100           call 0x591b80
// 0057abe4  83c420               add esp, 0x20
// 0057abe7  c3                   ret 

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS-

extern double g_togglePlayModeValue;

struct TogglePlayModeHelper
{
	void* field0;
	void* field4;
	void* field8;
	void* fieldC;
};

struct TogglePlayModeBuilder
{
	TogglePlayModeHelper* buildHelper(TogglePlayModeHelper* out, double value);
};

struct TogglePlayModeRunner
{
	void run();
};

void TogglePlayMode(void* arg)
{
	TogglePlayModeHelper helper;
	TogglePlayModeBuilder builder;
	TogglePlayModeRunner* runner =
		(TogglePlayModeRunner*)builder.buildHelper(&helper, g_togglePlayModeValue);
	runner->run();
}
