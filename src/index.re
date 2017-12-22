Js.log("Testing ! One Two... One Two !!!");

type trees =
  | Pine
  | Maple
  | Other(string);

let verifyTree = tree =>
  switch tree {
  | Pine => "It's a Pine!"
  | Maple => "It's a Maple"
  | Other("Black Lotus") => "Holly SH***!"
  | Other(anyOtherTree) => "Look, it's a " ++ anyOtherTree ++ "!"
  };