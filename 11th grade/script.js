const data = [
  { name: "A", waktu: 1.5 },
  { name: "B", waktu: 3 },
  { name: "C", waktu: 1 },
  { name: "D", waktu: 0.5 },
  { name: "E", waktu: 4 },
  { name: "F", waktu: 1 },
  { name: "G", waktu: 2.5 },
  { name: "H", waktu: 1 },
  { name: "I", waktu: 0.5 },
  { name: "J", waktu: 2 },
];

data.sort((a, b) => {
  if (a.waktu < b.waktu) return -1;
  if (a.waktu > b.waktu) return 1;
  return 0;
});

console.log(data);
