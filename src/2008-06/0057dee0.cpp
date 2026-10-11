// from server: 36% by colin
struct RBX_WatchCameraCommand
{
    float x;
    float y;
    float z;
    void func_0057dee0(const RBX_WatchCameraCommand& other);
};

void RBX_WatchCameraCommand::func_0057dee0(const RBX_WatchCameraCommand& other)
{
    float nx = (other.x < x) ? other.x : x;
    float ny = (other.y < y) ? other.y : y;
    float nz = (other.z < z) ? other.z : z;
    x = nx;
    y = ny;
    z = nz;
}
