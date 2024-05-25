namespace P_InvokeHostLibrary;
using ICU4N.Text;

public interface IOpvzCPPObject
{
    UInt32 ObjID { get; }
    IntPtr ObjHandle{ get; }
}

public class OpvzCPPObject : IOpvzCPPObject
{
    public uint ObjID => throw new NotImplementedException();

    public nint ObjHandle => throw new NotImplementedException();
}