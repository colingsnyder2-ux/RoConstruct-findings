// from server: 92% by atomic.potato
// roc 2009-06 006aee60  unit: RBX::NormalBreakConnector  size: 38 bytes
// float RBX::NormalBreakConnector::getProbedD3DDeviceSettingsForWindowedRatio()

extern int dword_A4FC50;
extern int dword_A4FC54;
extern float flt_8B7594;

struct RBX_NormalBreakConnector
{
    float getProbedD3DDeviceSettingsForWindowedRatio();
};

float RBX_NormalBreakConnector::getProbedD3DDeviceSettingsForWindowedRatio()
{
    int sum = dword_A4FC50 + dword_A4FC54;
    if (sum == 0)
        return flt_8B7594;
    return (float)dword_A4FC50 / (float)sum;
}
